/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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
 * OAI_sendPoll_post_request.h
 *
 * 
 */

#ifndef OAI_sendPoll_post_request_H
#define OAI_sendPoll_post_request_H

#include <QJsonObject>

#include "OAIInputPollOption.h"
#include "OAIMessageEntity.h"
#include "OAIReplyParameters.h"
#include "OAI_sendMessage_post_request_chat_id.h"
#include "OAI_sendMessage_post_request_reply_markup.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIInputPollOption;
class OAIMessageEntity;
class OAIReplyParameters;
class OAI_sendMessage_post_request_reply_markup;

class OAI_sendPoll_post_request : public OAIObject {
public:
    OAI_sendPoll_post_request();
    OAI_sendPoll_post_request(QString json);
    ~OAI_sendPoll_post_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAI_sendMessage_post_request_chat_id getChatId() const;
    void setChatId(const OAI_sendMessage_post_request_chat_id &chat_id);
    bool is_chat_id_Set() const;
    bool is_chat_id_Valid() const;

    QString getQuestion() const;
    void setQuestion(const QString &question);
    bool is_question_Set() const;
    bool is_question_Valid() const;

    QList<OAIInputPollOption> getOptions() const;
    void setOptions(const QList<OAIInputPollOption> &options);
    bool is_options_Set() const;
    bool is_options_Valid() const;

    QString getBusinessConnectionId() const;
    void setBusinessConnectionId(const QString &business_connection_id);
    bool is_business_connection_id_Set() const;
    bool is_business_connection_id_Valid() const;

    qint32 getMessageThreadId() const;
    void setMessageThreadId(const qint32 &message_thread_id);
    bool is_message_thread_id_Set() const;
    bool is_message_thread_id_Valid() const;

    QString getQuestionParseMode() const;
    void setQuestionParseMode(const QString &question_parse_mode);
    bool is_question_parse_mode_Set() const;
    bool is_question_parse_mode_Valid() const;

    QList<OAIMessageEntity> getQuestionEntities() const;
    void setQuestionEntities(const QList<OAIMessageEntity> &question_entities);
    bool is_question_entities_Set() const;
    bool is_question_entities_Valid() const;

    bool isIsAnonymous() const;
    void setIsAnonymous(const bool &is_anonymous);
    bool is_is_anonymous_Set() const;
    bool is_is_anonymous_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    bool isAllowsMultipleAnswers() const;
    void setAllowsMultipleAnswers(const bool &allows_multiple_answers);
    bool is_allows_multiple_answers_Set() const;
    bool is_allows_multiple_answers_Valid() const;

    qint32 getCorrectOptionId() const;
    void setCorrectOptionId(const qint32 &correct_option_id);
    bool is_correct_option_id_Set() const;
    bool is_correct_option_id_Valid() const;

    QString getExplanation() const;
    void setExplanation(const QString &explanation);
    bool is_explanation_Set() const;
    bool is_explanation_Valid() const;

    QString getExplanationParseMode() const;
    void setExplanationParseMode(const QString &explanation_parse_mode);
    bool is_explanation_parse_mode_Set() const;
    bool is_explanation_parse_mode_Valid() const;

    QList<OAIMessageEntity> getExplanationEntities() const;
    void setExplanationEntities(const QList<OAIMessageEntity> &explanation_entities);
    bool is_explanation_entities_Set() const;
    bool is_explanation_entities_Valid() const;

    qint32 getOpenPeriod() const;
    void setOpenPeriod(const qint32 &open_period);
    bool is_open_period_Set() const;
    bool is_open_period_Valid() const;

    qint32 getCloseDate() const;
    void setCloseDate(const qint32 &close_date);
    bool is_close_date_Set() const;
    bool is_close_date_Valid() const;

    bool isIsClosed() const;
    void setIsClosed(const bool &is_closed);
    bool is_is_closed_Set() const;
    bool is_is_closed_Valid() const;

    bool isDisableNotification() const;
    void setDisableNotification(const bool &disable_notification);
    bool is_disable_notification_Set() const;
    bool is_disable_notification_Valid() const;

    bool isProtectContent() const;
    void setProtectContent(const bool &protect_content);
    bool is_protect_content_Set() const;
    bool is_protect_content_Valid() const;

    bool isAllowPaidBroadcast() const;
    void setAllowPaidBroadcast(const bool &allow_paid_broadcast);
    bool is_allow_paid_broadcast_Set() const;
    bool is_allow_paid_broadcast_Valid() const;

    QString getMessageEffectId() const;
    void setMessageEffectId(const QString &message_effect_id);
    bool is_message_effect_id_Set() const;
    bool is_message_effect_id_Valid() const;

    OAIReplyParameters getReplyParameters() const;
    void setReplyParameters(const OAIReplyParameters &reply_parameters);
    bool is_reply_parameters_Set() const;
    bool is_reply_parameters_Valid() const;

    OAI_sendMessage_post_request_reply_markup getReplyMarkup() const;
    void setReplyMarkup(const OAI_sendMessage_post_request_reply_markup &reply_markup);
    bool is_reply_markup_Set() const;
    bool is_reply_markup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAI_sendMessage_post_request_chat_id m_chat_id;
    bool m_chat_id_isSet;
    bool m_chat_id_isValid;

    QString m_question;
    bool m_question_isSet;
    bool m_question_isValid;

    QList<OAIInputPollOption> m_options;
    bool m_options_isSet;
    bool m_options_isValid;

    QString m_business_connection_id;
    bool m_business_connection_id_isSet;
    bool m_business_connection_id_isValid;

    qint32 m_message_thread_id;
    bool m_message_thread_id_isSet;
    bool m_message_thread_id_isValid;

    QString m_question_parse_mode;
    bool m_question_parse_mode_isSet;
    bool m_question_parse_mode_isValid;

    QList<OAIMessageEntity> m_question_entities;
    bool m_question_entities_isSet;
    bool m_question_entities_isValid;

    bool m_is_anonymous;
    bool m_is_anonymous_isSet;
    bool m_is_anonymous_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    bool m_allows_multiple_answers;
    bool m_allows_multiple_answers_isSet;
    bool m_allows_multiple_answers_isValid;

    qint32 m_correct_option_id;
    bool m_correct_option_id_isSet;
    bool m_correct_option_id_isValid;

    QString m_explanation;
    bool m_explanation_isSet;
    bool m_explanation_isValid;

    QString m_explanation_parse_mode;
    bool m_explanation_parse_mode_isSet;
    bool m_explanation_parse_mode_isValid;

    QList<OAIMessageEntity> m_explanation_entities;
    bool m_explanation_entities_isSet;
    bool m_explanation_entities_isValid;

    qint32 m_open_period;
    bool m_open_period_isSet;
    bool m_open_period_isValid;

    qint32 m_close_date;
    bool m_close_date_isSet;
    bool m_close_date_isValid;

    bool m_is_closed;
    bool m_is_closed_isSet;
    bool m_is_closed_isValid;

    bool m_disable_notification;
    bool m_disable_notification_isSet;
    bool m_disable_notification_isValid;

    bool m_protect_content;
    bool m_protect_content_isSet;
    bool m_protect_content_isValid;

    bool m_allow_paid_broadcast;
    bool m_allow_paid_broadcast_isSet;
    bool m_allow_paid_broadcast_isValid;

    QString m_message_effect_id;
    bool m_message_effect_id_isSet;
    bool m_message_effect_id_isValid;

    OAIReplyParameters m_reply_parameters;
    bool m_reply_parameters_isSet;
    bool m_reply_parameters_isValid;

    OAI_sendMessage_post_request_reply_markup m_reply_markup;
    bool m_reply_markup_isSet;
    bool m_reply_markup_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAI_sendPoll_post_request)

#endif // OAI_sendPoll_post_request_H
