/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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
 * OAICallbackQuery.h
 *
 * This object represents an incoming callback query from a callback button in an [inline keyboard](https://core.telegram.org/bots/features#inline-keyboards). If the button that originated the query was attached to a message sent by the bot, the field *message* will be present. If the button was attached to a message sent via the bot (in [inline mode](https://core.telegram.org/bots/api/#inline-mode)), the field *inline\\_message\\_id* will be present. Exactly one of the fields *data* or *game\\_short\\_name* will be present.
 */

#ifndef OAICallbackQuery_H
#define OAICallbackQuery_H

#include <QJsonObject>

#include "OAIMaybeInaccessibleMessage.h"
#include "OAIUser.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIUser;
class OAIMaybeInaccessibleMessage;

class OAICallbackQuery : public OAIObject {
public:
    OAICallbackQuery();
    OAICallbackQuery(QString json);
    ~OAICallbackQuery() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    OAIUser getFrom() const;
    void setFrom(const OAIUser &from);
    bool is_from_Set() const;
    bool is_from_Valid() const;

    QString getChatInstance() const;
    void setChatInstance(const QString &chat_instance);
    bool is_chat_instance_Set() const;
    bool is_chat_instance_Valid() const;

    OAIMaybeInaccessibleMessage getMessage() const;
    void setMessage(const OAIMaybeInaccessibleMessage &message);
    bool is_message_Set() const;
    bool is_message_Valid() const;

    QString getInlineMessageId() const;
    void setInlineMessageId(const QString &inline_message_id);
    bool is_inline_message_id_Set() const;
    bool is_inline_message_id_Valid() const;

    QString getData() const;
    void setData(const QString &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    QString getGameShortName() const;
    void setGameShortName(const QString &game_short_name);
    bool is_game_short_name_Set() const;
    bool is_game_short_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    OAIUser m_from;
    bool m_from_isSet;
    bool m_from_isValid;

    QString m_chat_instance;
    bool m_chat_instance_isSet;
    bool m_chat_instance_isValid;

    OAIMaybeInaccessibleMessage m_message;
    bool m_message_isSet;
    bool m_message_isValid;

    QString m_inline_message_id;
    bool m_inline_message_id_isSet;
    bool m_inline_message_id_isValid;

    QString m_data;
    bool m_data_isSet;
    bool m_data_isValid;

    QString m_game_short_name;
    bool m_game_short_name_isSet;
    bool m_game_short_name_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAICallbackQuery)

#endif // OAICallbackQuery_H
