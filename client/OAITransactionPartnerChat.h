/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAITransactionPartnerChat.h
 *
 * Describes a transaction with a chat.
 */

#ifndef OAITransactionPartnerChat_H
#define OAITransactionPartnerChat_H

#include <QJsonObject>

#include "OAIChat.h"
#include "OAIGift.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIChat;
class OAIGift;

class OAITransactionPartnerChat : public OAIObject {
public:
    OAITransactionPartnerChat();
    OAITransactionPartnerChat(QString json);
    ~OAITransactionPartnerChat() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    OAIChat getChat() const;
    void setChat(const OAIChat &chat);
    bool is_chat_Set() const;
    bool is_chat_Valid() const;

    OAIGift getGift() const;
    void setGift(const OAIGift &gift);
    bool is_gift_Set() const;
    bool is_gift_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    OAIChat m_chat;
    bool m_chat_isSet;
    bool m_chat_isValid;

    OAIGift m_gift;
    bool m_gift_isSet;
    bool m_gift_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAITransactionPartnerChat)

#endif // OAITransactionPartnerChat_H
