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
 * OAIMessageOrigin.h
 *
 * This object describes the origin of a message. It can be one of  * [MessageOriginUser](https://core.telegram.org/bots/api/#messageoriginuser) * [MessageOriginHiddenUser](https://core.telegram.org/bots/api/#messageoriginhiddenuser) * [MessageOriginChat](https://core.telegram.org/bots/api/#messageoriginchat) * [MessageOriginChannel](https://core.telegram.org/bots/api/#messageoriginchannel)
 */

#ifndef OAIMessageOrigin_H
#define OAIMessageOrigin_H

#include <QJsonObject>

#include "OAIChat.h"
#include "OAIMessageOriginChannel.h"
#include "OAIMessageOriginChat.h"
#include "OAIMessageOriginHiddenUser.h"
#include "OAIMessageOriginUser.h"
#include "OAIUser.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIUser;
class OAIChat;

class OAIMessageOrigin : public OAIObject {
public:
    OAIMessageOrigin();
    OAIMessageOrigin(QString json);
    ~OAIMessageOrigin() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getDate() const;
    void setDate(const qint32 &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    OAIUser getSenderUser() const;
    void setSenderUser(const OAIUser &sender_user);
    bool is_sender_user_Set() const;
    bool is_sender_user_Valid() const;

    QString getSenderUserName() const;
    void setSenderUserName(const QString &sender_user_name);
    bool is_sender_user_name_Set() const;
    bool is_sender_user_name_Valid() const;

    OAIChat getSenderChat() const;
    void setSenderChat(const OAIChat &sender_chat);
    bool is_sender_chat_Set() const;
    bool is_sender_chat_Valid() const;

    OAIChat getChat() const;
    void setChat(const OAIChat &chat);
    bool is_chat_Set() const;
    bool is_chat_Valid() const;

    qint32 getMessageId() const;
    void setMessageId(const qint32 &message_id);
    bool is_message_id_Set() const;
    bool is_message_id_Valid() const;

    QString getAuthorSignature() const;
    void setAuthorSignature(const QString &author_signature);
    bool is_author_signature_Set() const;
    bool is_author_signature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 m_date;
    bool m_date_isSet;
    bool m_date_isValid;

    OAIUser m_sender_user;
    bool m_sender_user_isSet;
    bool m_sender_user_isValid;

    QString m_sender_user_name;
    bool m_sender_user_name_isSet;
    bool m_sender_user_name_isValid;

    OAIChat m_sender_chat;
    bool m_sender_chat_isSet;
    bool m_sender_chat_isValid;

    OAIChat m_chat;
    bool m_chat_isSet;
    bool m_chat_isValid;

    qint32 m_message_id;
    bool m_message_id_isSet;
    bool m_message_id_isValid;

    QString m_author_signature;
    bool m_author_signature_isSet;
    bool m_author_signature_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIMessageOrigin)

#endif // OAIMessageOrigin_H
