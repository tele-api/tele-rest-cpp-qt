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
 * OAIReplyParameters.h
 *
 * Describes reply parameters for the message that is being sent.
 */

#ifndef OAIReplyParameters_H
#define OAIReplyParameters_H

#include <QJsonObject>

#include "OAIMessageEntity.h"
#include "OAIReplyParameters_chat_id.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIMessageEntity;

class OAIReplyParameters : public OAIObject {
public:
    OAIReplyParameters();
    OAIReplyParameters(QString json);
    ~OAIReplyParameters() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getMessageId() const;
    void setMessageId(const qint32 &message_id);
    bool is_message_id_Set() const;
    bool is_message_id_Valid() const;

    OAIReplyParameters_chat_id getChatId() const;
    void setChatId(const OAIReplyParameters_chat_id &chat_id);
    bool is_chat_id_Set() const;
    bool is_chat_id_Valid() const;

    bool isAllowSendingWithoutReply() const;
    void setAllowSendingWithoutReply(const bool &allow_sending_without_reply);
    bool is_allow_sending_without_reply_Set() const;
    bool is_allow_sending_without_reply_Valid() const;

    QString getQuote() const;
    void setQuote(const QString &quote);
    bool is_quote_Set() const;
    bool is_quote_Valid() const;

    QString getQuoteParseMode() const;
    void setQuoteParseMode(const QString &quote_parse_mode);
    bool is_quote_parse_mode_Set() const;
    bool is_quote_parse_mode_Valid() const;

    QList<OAIMessageEntity> getQuoteEntities() const;
    void setQuoteEntities(const QList<OAIMessageEntity> &quote_entities);
    bool is_quote_entities_Set() const;
    bool is_quote_entities_Valid() const;

    qint32 getQuotePosition() const;
    void setQuotePosition(const qint32 &quote_position);
    bool is_quote_position_Set() const;
    bool is_quote_position_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_message_id;
    bool m_message_id_isSet;
    bool m_message_id_isValid;

    OAIReplyParameters_chat_id m_chat_id;
    bool m_chat_id_isSet;
    bool m_chat_id_isValid;

    bool m_allow_sending_without_reply;
    bool m_allow_sending_without_reply_isSet;
    bool m_allow_sending_without_reply_isValid;

    QString m_quote;
    bool m_quote_isSet;
    bool m_quote_isValid;

    QString m_quote_parse_mode;
    bool m_quote_parse_mode_isSet;
    bool m_quote_parse_mode_isValid;

    QList<OAIMessageEntity> m_quote_entities;
    bool m_quote_entities_isSet;
    bool m_quote_entities_isValid;

    qint32 m_quote_position;
    bool m_quote_position_isSet;
    bool m_quote_position_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIReplyParameters)

#endif // OAIReplyParameters_H
